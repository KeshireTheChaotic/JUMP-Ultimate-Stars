
undefined4 FUN_02001da0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8 [2];
  
  local_8[0] = 4;
  iVar1 = FUN_02001a34(param_1,0xffff,0x1002,&local_c,local_8);
  uVar2 = 0xffffffff;
  if (iVar1 != -1) {
    uVar2 = local_c;
  }
  return uVar2;
}

