angular.module('todoApp', [])
	.controller('TodoControl', function ($scope) {
		//初始化数据
		$scope.todos = [
			{todo : '吃饭', isChecked : false},
			{todo : '睡觉', isChecked : false},
			{todo : '打豆豆', isChecked : false}
		];

		//定义添加todo的方法
		$scope.add = function () {
			//判断添加的内容是否为空
			if(!$scope.newTodo){
				alert('输入的内容不能空');
				return
			}
			// 组合新的todo对象
			var todo = {
				todo : $scope.newTodo,
				isChecked : false
			};
			// 将新的对象添加到todos中
			$scope.todos.unshift(todo);
			//添加完将输入的内容清空
			$scope.newTodo = '';
		};

		//定义删除  todo 的方法
		$scope.delete = function () {
			//将$scope.todo的数据暂时保存
			var oldTodo = $scope.todos;
			//将$scope.todos的数据清空
			$scope.todos = [];
			//进行遍历
			oldTodo.forEach(function (item, index) {
				//将没被选中的todo添加到 $scope.todos 数组中
				if(!item.isChecked){
					$scope.todos.push(item);
				}
			});
		}
	});