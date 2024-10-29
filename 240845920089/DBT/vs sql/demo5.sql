drop procedure if exists pro1;
delimiter $
create procedure pro1(in x int, in y int , out z int,out z1 int)
begin 
        set z:=x+y;
        set z1:=x*y;
end $
delimiter ;
