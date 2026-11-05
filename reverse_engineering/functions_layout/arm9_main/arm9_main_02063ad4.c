
int FUN_02063ad4(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 0x34) = param_2;
  iVar3 = *(int *)(param_1 + 8);
  if ((*(uint *)(param_1 + 0xc) & 4) == 0) {
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x100;
  }
  else {
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x200;
  }
  if ((*(uint *)(iVar3 + 0x58) & 4) == 0) {
    iVar1 = 7;
  }
  else {
    iVar1 = (**(code **)(iVar3 + 0x54))(param_1,2);
    switch(iVar1) {
    case 0:
    case 1:
    case 4:
      *(int *)(param_1 + 0x14) = iVar1;
      break;
    case 8:
      iVar1 = 7;
      *(uint *)(iVar3 + 0x58) = *(uint *)(iVar3 + 0x58) & 0xfffffffb;
    }
  }
  if (iVar1 == 7) {
    iVar1 = (*(code *)PTR_FUN_02063a2c_1_020921ec)(param_1);
  }
  if (iVar1 == 6) {
    if ((*(uint *)(param_1 + 0xc) & 4) != 0) {
      uVar2 = OS_DisableInterrupts();
      if ((*(uint *)(iVar3 + 0x1c) & 0x200) != 0) {
        do {
          FUN_02053290(iVar3 + 0xc);
        } while ((*(uint *)(iVar3 + 0x1c) & 0x200) != 0);
      }
      iVar1 = *(int *)(param_1 + 0x14);
      OS_RestoreInterrupts(uVar2);
    }
  }
  else if ((*(uint *)(param_1 + 0xc) & 4) == 0) {
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffeff;
    FUN_020634f4(param_1,iVar1);
  }
  else {
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffdff;
    *(int *)(param_1 + 0x14) = iVar1;
  }
  return iVar1;
}

