
void FUN_02009838(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  uint local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((param_2 & 0x7fffffff) < 0x3fe921fc) {
    FUN_0200892c(param_1,param_2,0,0);
    return;
  }
  if (0x7fefffff < (param_2 & 0x7fffffff)) {
    FUN_0200bc6c(param_1,param_2,param_1,param_2);
    return;
  }
  uVar1 = FUN_020084cc(param_1,param_2,&local_24);
  uVar1 = uVar1 & 3;
  if (uVar1 == 0) {
    FUN_0200892c(local_24,local_20,local_1c,local_18);
    return;
  }
  if (uVar1 == 1) {
    uVar2 = FUN_02009314(local_24,local_20,local_1c,local_18,1);
    FUN_0200bc6c(0,0,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
    return;
  }
  if (uVar1 == 2) {
    uVar2 = FUN_0200892c(local_24,local_20,local_1c,local_18);
    FUN_0200bc6c(0,0,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
    return;
  }
  FUN_02009314(local_24,local_20,local_1c,local_18,1);
  return;
}

