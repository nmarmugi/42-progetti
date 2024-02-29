document.addEventListener('DOMContentLoaded', function() {
    var ftList = document.getElementById('ft_list');
    var newButton = document.getElementById('newButton');
    newButton.addEventListener('click', function() {
        var task = prompt('Enter a new task:');
        if (task) {
            addTodoItem(task);
        }
    });
    ftList.addEventListener('click', function(event) {
        if (event.target.classList.contains('todoItem')) {
            var confirmDelete = confirm('Do you want to remove this task?');
            if (confirmDelete) {
                event.target.remove();
                saveTodoList();
            }
        }
    });
    loadTodoList();
    function addTodoItem(task) {
        var todoItem = document.createElement('div');
        todoItem.textContent = task;
        todoItem.classList.add('todoItem');
        ftList.insertBefore(todoItem, ftList.firstChild);
        saveTodoList();
    }
    function saveTodoList() {
        var todoItems = ftList.querySelectorAll('.todoItem');
        var todoList = [];
        todoItems.forEach(function(item) {
            todoList.push(item.textContent);
        });
        document.cookie = 'todoList=' + JSON.stringify(todoList);
    }
    function loadTodoList() {
        var todoList = getCookie('todoList');
        if (todoList) {
            todoList = JSON.parse(todoList);
            todoList.forEach(function(task) {
                addTodoItem(task);
            });
        }
    }
    function getCookie(name) {
        var cookieValue = document.cookie.match('(^|;) ?' + name + '=([^;]*)(;|$)');
        return cookieValue ? cookieValue[2] : null;
    }
});