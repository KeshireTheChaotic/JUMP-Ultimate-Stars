
uint FUN_020633d8(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  if ((*(uint *)(param_1 + 0xc) & 4) == 0) {
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x100;
  }
  else {
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x200;
  }
  if ((*(uint *)(iVar3 + 0x58) & 1 << (param_2 & 0xff)) == 0) {
    uVar1 = 7;
  }
  else {
    uVar1 = (**(code **)(iVar3 + 0x54))(param_1,param_2);
    if (uVar1 < 9) {
      uVar1 = (*(code *)((int)&switchD_0206342c::switchdataD_0206342e +
                        (int)(short)(&switchD_0206342c::switchdataD_0206342e)[uVar1]))();
      return uVar1;
    }
  }
  if (uVar1 == 7) {
    uVar1 = (*(code *)(&PTR_FUN_02063ab4_1_020921e4)[param_2])(param_1);
  }
  if (uVar1 == 6) {
    if ((*(uint *)(param_1 + 0xc) & 4) != 0) {
      uVar2 = OS_DisableInterrupts();
      if ((*(uint *)(iVar3 + 0x1c) & 0x200) != 0) {
        do {
          FUN_02053290(iVar3 + 0xc);
        } while ((*(uint *)(iVar3 + 0x1c) & 0x200) != 0);
      }
      uVar1 = *(uint *)(param_1 + 0x14);
      OS_RestoreInterrupts(uVar2);
    }
  }
  else if ((*(uint *)(param_1 + 0xc) & 4) == 0) {
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffeff;
    FUN_020634f4(param_1,uVar1);
  }
  else {
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffdff;
    *(uint *)(param_1 + 0x14) = uVar1;
  }
  return uVar1;
}

