
undefined4 FUN_021c10a8(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar1 = OS_DisableInterrupts();
  piVar3 = param_1 + 0xc;
  if (piVar3 < param_1 + 0x1c) {
    do {
      if (((1 < (uint)piVar3[3]) && (iVar2 = param_2 - *piVar3, -1 < iVar2)) &&
         ((uint)(iVar2 + param_4) <= (uint)piVar3[1])) {
        FUN_02051890(piVar3[2] + iVar2,param_3,param_4);
        *param_1 = 0;
        uVar4 = 1;
        break;
      }
      piVar3 = piVar3 + 4;
    } while (piVar3 < param_1 + 0x1c);
  }
  OS_RestoreInterrupts(uVar1);
  return uVar4;
}

