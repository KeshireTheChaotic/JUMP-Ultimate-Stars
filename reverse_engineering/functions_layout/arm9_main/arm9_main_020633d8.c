
int FUN_020633d8(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 8);
  uVar4 = 1 << (param_2 & 0xff);
  if ((*(uint *)(param_1 + 0xc) & 4) == 0) {
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x100;
  }
  else {
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x200;
  }
  if ((*(uint *)(iVar3 + 0x58) & uVar4) == 0) {
    iVar1 = 7;
  }
  else {
    iVar1 = (**(code **)(iVar3 + 0x54))(param_1,param_2);
    switch(iVar1) {
    case 0:
    case 1:
    case 4:
      *(int *)(param_1 + 0x14) = iVar1;
      break;
    case 8:
      iVar1 = 7;
      *(uint *)(iVar3 + 0x58) = *(uint *)(iVar3 + 0x58) & ~uVar4;
    }
  }
  if (iVar1 == 7) {
    iVar1 = (*(code *)(&PTR_LAB_02063ab4_1_020921e4)[param_2])(param_1);
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

