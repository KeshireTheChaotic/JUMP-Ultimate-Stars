
bool FUN_02069b0c(uint param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint local_118;
  undefined4 local_114;
  undefined1 auStack_110 [256];
  
  if ((param_1 & 0x80000000) == 0) {
    local_118 = param_1;
    local_114 = param_3;
    FUN_02051054(auStack_110,7);
    uVar1 = FUN_02050ec8(auStack_110,&local_118,8);
    return (uVar1 & 0x7f) == param_2;
  }
  return false;
}

