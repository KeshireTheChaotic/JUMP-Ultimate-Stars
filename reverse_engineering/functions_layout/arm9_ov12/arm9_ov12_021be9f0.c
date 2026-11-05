
undefined4 FUN_021be9f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar1 = OS_DisableInterrupts();
  switch(param_2) {
  case 0:
    iVar3 = 10;
    uVar4 = 4;
    break;
  case 1:
    iVar3 = 10;
    uVar4 = 3;
    break;
  case 2:
    iVar3 = 0xe;
    uVar4 = 2;
    break;
  case 3:
    iVar3 = 7;
    uVar4 = 5;
    break;
  default:
    OS_RestoreInterrupts(uVar1);
    return 0;
  }
  if (((DAT_021d525c == 0) || (iVar2 = FUN_021bddb0(param_1), iVar2 == 0)) ||
     (iVar3 != *(int *)(DAT_021d525c + (param_1 + -1) * 4 + 0x14e8))) {
    OS_RestoreInterrupts(uVar1);
    return 0;
  }
  *(undefined2 *)(DAT_021d525c + (param_1 + -1) * 2 + 0x1754) = uVar4;
  OS_RestoreInterrupts(uVar1);
  return 1;
}

