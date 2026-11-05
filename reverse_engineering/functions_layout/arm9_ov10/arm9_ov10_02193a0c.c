
void FUN_02193a0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  uint uVar2;
  
  if (param_5 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = (int)(uint)*(ushort *)(param_5 + 2) >> 8 | (*(ushort *)(param_5 + 2) & 0xff) << 8;
    uVar2 = *(uint *)(param_5 + 4);
    uVar2 = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 0x18 | uVar2 >> 8 & 0xff00;
  }
  FUN_02192c50(param_1,param_2,param_3,uVar1,uVar2,param_4);
  return;
}

