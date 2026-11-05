
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
      FUN_027f6758();
      break;
    case 0x21:
      FUN_027f6718();
      break;
    case 0x22:
      FUN_027f66a4(*(undefined4 *)(param_1 + 0x10));
      break;
    case 0x23:
      iVar2 = FUN_027f59f8();
      if (iVar2 == 0) {
        FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,3);
        FUN_0380465c(1);
        return;
      }
      FUN_027f6584(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                   *(undefined4 *)(param_1 + 0x10));
      break;
    case 0x24:
      iVar2 = FUN_027f59f8();
      if (iVar2 == 0) {
        FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,3);
        FUN_0380465c(1);
        return;
      }
      FUN_027f6448(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                   *(undefined4 *)(param_1 + 0x10));
      break;
    case 0x25:
      iVar2 = FUN_027f59c0();
      if (iVar2 == 0) {
        FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,3);
        FUN_0380465c(1);
        return;
      }
      FUN_027f631c(*(undefined4 *)(param_1 + 8),*(uint *)(param_1 + 0xc) & 0xffff,
                   *(undefined4 *)(param_1 + 0x10));
      break;
    case 0x26:
      iVar2 = FUN_027f59c0();
      if (iVar2 == 0) {
        FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,3);
        FUN_0380465c(1);
        return;
      }
      FUN_027f61f0(*(undefined4 *)(param_1 + 8),*(uint *)(param_1 + 0xc) & 0xffff,
                   *(undefined4 *)(param_1 + 0x10));
      break;
    case 0x27:
      iVar2 = FUN_027f59c0();
      if (iVar2 == 0) {
        FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,3);
        FUN_0380465c(1);
        return;
      }
      FUN_027f612c(*(undefined4 *)(param_1 + 8));
      break;
    case 0x28:
      iVar2 = FUN_027f59c0();
      if (iVar2 == 0) {
        FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,3);
        FUN_0380465c(1);
        return;
      }
      FUN_027f6068(*(undefined4 *)(param_1 + 8));
      break;
    case 0x29:
      FUN_027f6028();
      break;
    case 0x2a:
      FUN_027f5fe8();
      break;
    case 0x2b:
      iVar2 = FUN_027f59c0();
      if (iVar2 == 0) {
        FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,3);
        FUN_0380465c(1);
        return;
      }
      FUN_027f5fa8();
      break;
    case 0x2c:
      FUN_027f5f0c(*(undefined4 *)(param_1 + 0x10));
      break;
    case 0x2d:
      FUN_027f5ecc();
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

