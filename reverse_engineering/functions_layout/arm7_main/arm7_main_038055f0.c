
void FUN_038055f0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = OS_DisableInterrupts();
  iVar3 = FUN_038046b8(3);
  if (iVar3 == 0) {
    OS_RestoreInterrupts(uVar2);
    FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,4);
  }
  else {
    FUN_038046a0(3);
    OS_RestoreInterrupts(uVar2);
    switch(*(uint *)(param_1 + 4)) {
    case 0x61:
      DAT_0380aa98 = 1;
      DAT_0380aa70 = (undefined2)*(undefined4 *)(param_1 + 8);
      DAT_0380aa6c = (undefined2)*(undefined4 *)(param_1 + 0xc);
      FUN_03805ce4();
      break;
    case 0x62:
    default:
      FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,1);
      break;
    case 99:
      DAT_0380aa98 = 2;
      DAT_0380aa9c = *(uint *)(param_1 + 8);
      FUN_03805bb8();
      FUN_038046d4(99,0);
      break;
    case 100:
      DAT_0380aa98 = 4;
      DAT_0380aaa0 = *(uint *)(param_1 + 8);
      DAT_0380aa9c = *(uint *)(param_1 + 0xc);
      jus_SpiPm_WriteRegister(DAT_0380aaa0 & 0xffff,DAT_0380aa9c & 0xff);
      FUN_038046d4(100,0);
      break;
    case 0x65:
      DAT_0380aa98 = 3;
      DAT_0380aaa0 = *(uint *)(param_1 + 8);
      uVar1 = DAT_0380aaa0 & 0xffff;
      uVar2 = jus_SpiPm_ReadRegister(uVar1);
      FUN_038046d4(uVar1 + 0x70 & 0xffff,uVar2);
      break;
    case 0x66:
      FUN_03805b50(*(undefined4 *)(param_1 + 8));
    }
    FUN_0380465c(3);
  }
  return;
}

