<?php

function tipuVai($arr1, $arr2)
{
    $len1 = count($arr1);
    $len2 = count($arr2);
    
    if($len1 > $len2){
        $numberOfZeros = $len1 - $len2;
        $a = [];
        for($i = 0; $i < $numberOfZeros; $i++){
            $a[$i] = 0;
        }
        $arr2 = array_merge($a, $arr2);
        
    }else if($len2 > $len1){
        $numberOfZeros = $len2 - $len1;
        $a = [];
        for($i = 0; $i < $numberOfZeros; $i++){
            $a[$i] = 0;
        }
        $arr1 = array_merge($a, $arr1);
       
        
    }

    $lastIndex = count($arr1) - 1;
    $sum = [];
    $carry = 0;
    
    for($i = $lastIndex; $i>=0 ; $i--){ 
        $temp = $arr1[$i] + $arr2[$i] + $carry;
        
        if($temp <10 ){
            $sum[$i] = $temp;
            $carry = 0;
        }else if($temp == 10){
            $carry = 1;
            $sum[$i] = 0;
        }else if($temp > 10){
            $carry = 1;
            $sum[$i] = $temp % 10;
        }


    }

   $result = "";
   if($carry > 0){
    $result .= (string)$carry;
   }
    for($i = 0; $i < count($sum); $i++){
        $result .= (string)$sum[$i];
    }
   
   echo $result . "\n";

}

tipuVai([9, 9, 9, 9], [9, 9]);
tipuVai([1, 5, 6, 7], [2, 3, 4, 6]);