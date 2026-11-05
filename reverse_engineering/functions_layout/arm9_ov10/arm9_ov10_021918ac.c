
undefined4 FUN_021918ac(undefined4 param_1,int param_2)

{
  undefined4 local_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [36];
  
  if (*(char *)(param_2 + 0xd) == '\x01') {
    FUN_02053d2c(auStack_30,auStack_34,1);
    *(undefined1 **)(param_2 + 8) = auStack_30;
    FUN_02191908(param_1,param_2);
    FUN_02053bd8(auStack_30,&local_38,1);
  }
  else {
    *(undefined4 *)(param_2 + 8) = 0;
    local_38 = FUN_02191908();
  }
  return local_38;
}

