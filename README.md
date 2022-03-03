在用 make test 的時候看到可以顯示目前運行多少，就去查了一下 qtest 的原始碼看到神奇的一行
`printf("\033[A\033[2K");` 
便去查了一下到底這行在幹嘛
[By this](https://wiki.bash-hackers.org/scripting/terminalcodes)可以知道他是 ansi 的控制碼 [(ansi control code)](https://en.wikipedia.org/wiki/ANSI_escape_code)，可以操控游標的行為。

再從這個網站拿到方塊格子的輸入方式 [這個網站](https://tw.piliapp.com/symbol/square/) ，拼湊出一個進度條 
展示影片
https://imgur.com/7h3kWha.js

