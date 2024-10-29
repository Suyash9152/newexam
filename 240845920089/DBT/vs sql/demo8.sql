drop procedure if exists pro1;
delimiter $
create procedure pro1(in a int)
begin 
     declare x int default 1;
     l:LOOP 
           select x;
           set x:= x+1;
                                                                  
           if x>a THEN
                 leave l;
            end if;
        end loop l;
end $
delimiter ;       