/*CodeJam 2010 Qualifers- Reverse Words*/
<?php
fscanf(STDIN,"%d",$t);
for($x=0;$x<$t;$x++)
{
fscanf(STDIN,"%s",$l);
$arr=explode(" ",$l);
array_reverse($arr);
for($i=0;$i<count($arr);$i++)
$arr[$i]=$arr[$i]." ";
$l=implode($arr);
echo "Case #".($x+1).": ".$l."\n";
}
?>
