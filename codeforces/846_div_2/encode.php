<?php
   $input= "#include <bits/stdc++.h>using namespace std;int32_t main(){string str;cin >> str;cout << \"Hello \" << str  << endl;return 0;}";
   echo base64_encode($input);
echo ("\n");
   echo base64_decode(base64_encode($input))


?>