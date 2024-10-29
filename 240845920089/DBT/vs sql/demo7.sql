drop procedure if exists pro1;
delimiter $
create procedure pro1()
begin 
        declare x int default 1;
            l:LOOP 
                    select x;
                    set x:=x+2;

                    if x=7 then 
                            leave l;
                    end if;
            end loop l;
end $
delimiter ;            
