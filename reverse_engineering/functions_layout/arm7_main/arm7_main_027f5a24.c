
void FUN_027f5a24(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = FUN_038046b8(1);
  if (iVar2 == 0) {
    OS_RestoreInterrupts(uVar1);
    FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,4);
  }
  else {
    FUN_038046a0(1);
    OS_RestoreInterrupts(uVar1);
    switch(*(undefined4 *)(param_1 + 4)) {
    case 0x20:
      jus_SpiFlash_WriteEnable();
      break;
    case 0x21:
      jus_SpiFlash_WriteDisable();
      break;
    case 0x22:
      jus_SpiFlash_ReadStatus(*(undefined4 *)(param_1 + 0x10));
      break;
    case 0x23:
      iVar2 = FUN_027f59f8();
      if (iVar2 == 0) {
        FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,3);
        FUN_0380465c(1);
        return;
      }
      jus_SpiFlash_Read(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                        *(undefined4 *)(param_1 + 0x10));
      break;
    case 0x24:
      iVar2 = FUN_027f59f8();
      if (iVar2 == 0) {
        FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,3);
        FUN_0380465c(1);
        return;
      }
      jus_SpiFlash_FastRead
                (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                 *(undefined4 *)(param_1 + 0x10));
      break;
    case 0x25:
      iVar2 = FUN_027f59c0();
      if (iVar2 == 0) {
        FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,3);
        FUN_0380465c(1);
        return;
      }
      jus_SpiFlash_PageWrite
                (*(undefined4 *)(param_1 + 8),*(uint *)(param_1 + 0xc) & 0xffff,
                 *(undefined4 *)(param_1 + 0x10));
      break;
    case 0x26:
      iVar2 = FUN_027f59c0();
      if (iVar2 == 0) {
        FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,3);
        FUN_0380465c(1);
        return;
      }
      jus_SpiFlash_PageProgram
                (*(undefined4 *)(param_1 + 8),*(uint *)(param_1 + 0xc) & 0xffff,
                 *(undefined4 *)(param_1 + 0x10));
      break;
    case 0x27:
      iVar2 = FUN_027f59c0();
      if (iVar2 == 0) {
        FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,3);
        FUN_0380465c(1);
        return;
      }
      jus_SpiFlash_PageErase(*(undefined4 *)(param_1 + 8));
      break;
    case 0x28:
      iVar2 = FUN_027f59c0();
      if (iVar2 == 0) {
        FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,3);
        FUN_0380465c(1);
        return;
      }
      jus_SpiFlash_SectorErase(*(undefined4 *)(param_1 + 8));
      break;
    case 0x29:
      jus_SpiFlash_DeepPowerDown();
      break;
    case 0x2a:
      jus_SpiFlash_ReleasePowerDown();
      break;
    case 0x2b:
      iVar2 = FUN_027f59c0();
      if (iVar2 == 0) {
        FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,3);
        FUN_0380465c(1);
        return;
      }
      jus_SpiFlash_ChipErase();
      break;
    case 0x2c:
      jus_SpiFlash_ReadJedecId(*(undefined4 *)(param_1 + 0x10));
      break;
    case 0x2d:
      jus_SpiFlash_SoftwareReset();
      break;
    default:
      FUN_0380465c(1);
      FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,1);
      return;
    }
    FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,0);
    FUN_0380465c(1);
  }
  return;
}

