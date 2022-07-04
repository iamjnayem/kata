<?php


function tipuVai($arr){

    $result = [];

    foreach($arr as $key => $value){
          foreach($value  as $item){
            $result[$item] = $key;
          }
        
    }

    print_r($result);


}

$arr = [
    "fruits" => ["mango", "apple", "banana", "lichy"],
    "mobile" => ["Nokia", "Samsung"],
    "latpop" => ["Hp", "mac", "MI"]
];

tipuVai($arr);
