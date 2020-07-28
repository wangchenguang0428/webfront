angular.module('noteApp', [])
    .controller('NoteController', function ($scope) {
        //console.log($scope.message);
        $scope.message = '';
        //定义获取剩余字数的方法
        $scope.getCount = function () {
            //判断输入数据的长度
            if(this.message.length > 100){
                $scope.message = $scope.message.slice(0, 100);
            }
            //返回剩余字数的个数
            return 100 - $scope.message.length;
        };

        //定义保存的方法
        $scope.save = function () {
            alert('note is saved');
            //将数据保存到sessionStorage中
            sessionStorage.setItem('note_key', JSON.stringify($scope.message));
            //将输入内容清空
            $scope.message = '';
        };
        //定义读取的方法
        $scope.read = function () {
            $scope.message = JSON.parse(sessionStorage.getItem('note_key') || '[]');//对读取null做了处理
        };

        // 定义删除的方法
        $scope.delete = function () {
            $scope.message = '';
        };

    });