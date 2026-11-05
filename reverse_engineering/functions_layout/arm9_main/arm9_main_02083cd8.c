
void FUN_02083cd8(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x84);
  for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
    if ((param_4 & (&DAT_0209ff90)[iVar3]) != 0) goto LAB_02083d34;
  }
  for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
    if ((param_3 & (&DAT_0209ffb8)[iVar3]) != 0) goto LAB_02083d34;
  }
  iVar3 = -1;
LAB_02083d34:
  uVar1 = *(uint *)(param_2 + 0x2c) & 0xff00ffff | iVar3 << 0x10;
  *(uint *)(param_2 + 0x2c) = uVar1;
  FUN_02037c24(param_1 + 0x84,iVar2,uVar1,param_4,param_4);
  FUN_02037b98(param_1 + 0x24 + iVar3 * 8,iVar2);
  *(int *)(iVar2 + 8) = param_2;
  return;
}

