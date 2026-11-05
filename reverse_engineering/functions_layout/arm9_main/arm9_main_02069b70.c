
ulonglong FUN_02069b70(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 auStack_108 [256];
  
  local_110 = param_1;
  local_10c = param_2;
  FUN_02051054(auStack_108,7);
  uVar1 = FUN_02050ec8(auStack_108,&local_110,8);
  return CONCAT44(uVar1,param_1) & 0x7fffffffff;
}

