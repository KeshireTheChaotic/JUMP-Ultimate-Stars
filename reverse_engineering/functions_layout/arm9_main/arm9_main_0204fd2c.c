
void FUN_0204fd2c(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_2 + 0x14);
  uVar3 = *(uint *)(param_2 + 0x10);
  FUN_0204fdf0(param_2,&DAT_0209db1c,1);
  uVar4 = *(uint *)(param_2 + 0x10) & 0x3f;
  uVar2 = 0x40 - uVar4;
  if (uVar2 < 8) {
    FUN_020517fc(param_2 + 0x18 + uVar4,0);
    FUN_0204f944(param_2);
    uVar4 = 0;
    uVar2 = 0x40;
  }
  if (8 < uVar2) {
    FUN_020517fc(param_2 + 0x18 + uVar4,0,uVar2 - 8);
  }
  *(uint *)(param_2 + 0x50) = uVar3 << 3;
  *(uint *)(param_2 + 0x54) = iVar1 << 3 | uVar3 >> 0x1d;
  FUN_0204f944(param_2);
  FUN_02051890(param_2,param_1,0x10);
  FUN_020517fc(param_2,0,0x58);
  return;
}

