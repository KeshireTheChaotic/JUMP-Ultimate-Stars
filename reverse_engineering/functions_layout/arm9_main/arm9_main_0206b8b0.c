
uint FUN_0206b8b0(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (int)param_1 >> 10 & 0x1f;
  uVar4 = (int)param_1 >> 5 & 0x1f;
  iVar1 = FUN_0200d12c(param_3 * (((int)param_2 >> 10 & 0x1fU) - uVar5),param_4);
  iVar2 = FUN_0200d12c(param_3 * ((param_2 & 0x1f) - (param_1 & 0x1f)),param_4);
  iVar3 = FUN_0200d12c(param_3 * (((int)param_2 >> 5 & 0x1fU) - uVar4),param_4);
  return (param_1 & 0x1f) + iVar2 & 0xff | (uVar4 + iVar3 & 0xff) << 5 |
         (uVar5 + iVar1 & 0x3f) << 10;
}

