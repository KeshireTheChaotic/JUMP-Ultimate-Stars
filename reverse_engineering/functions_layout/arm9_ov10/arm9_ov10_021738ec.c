
uint FUN_021738ec(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_02173920();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_02004b04();
  uVar3 = FUN_02175528(iVar1,uVar2,param_3,param_4);
  if ((uVar3 != 0xffffffff) && (uVar3 < param_4)) {
    *(undefined1 *)(param_3 + uVar3) = 0;
  }
  return uVar3;
}

