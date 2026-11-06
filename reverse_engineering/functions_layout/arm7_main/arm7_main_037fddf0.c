
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fddf0(void)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  
                    /* JUS-TAG hw={"IO_other":2} io=["04000004","04000006"] */
  OS_DisableIrqMask(4);
  _DAT_04000004 = _DAT_04000004 & 0xffdf;
  _DAT_0380fff8 = _DAT_0380fff8 | 4;
  FUN_037fdd54(((int)(uint)_DAT_04000004 >> 8 | (_DAT_04000004 & 0x80) << 1) - 1);
LAB_037fdf48:
  do {
    uVar2 = _DAT_04000006;
    puVar1 = DAT_03808484;
    if (DAT_03808484 == (undefined4 *)0x0) {
      return;
    }
    iVar3 = FUN_037fdd54(_DAT_04000006);
    iVar4 = FUN_037fdda0(puVar1,iVar3,uVar2);
    if (iVar4 == 0) {
      FUN_037fe074(puVar1);
      if ((int)*(short *)(puVar1 + 4) != (uint)_DAT_04000006) {
        return;
      }
      if (puVar1[3] != iVar3) {
        return;
      }
      OS_DisableIrqMask(4);
      _DAT_04000004 = _DAT_04000004 & 0xffdf;
      OS_ResetRequestIrqMask(4);
    }
    else if (iVar4 != 1) {
      if (iVar4 == 2) {
        FUN_037fe214(puVar1);
        FUN_037fe24c(puVar1);
        puVar1[3] = DAT_03808480 + 1;
      }
      goto LAB_037fdf48;
    }
    pcVar5 = (code *)*puVar1;
    FUN_037fe214(puVar1);
    *puVar1 = 0;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(puVar1[1]);
    }
    if ((puVar1[7] != 0) && (puVar1[9] == 0)) {
      *puVar1 = pcVar5;
      puVar1[3] = DAT_03808480 + 1;
      FUN_037fe24c(puVar1);
    }
  } while( true );
}

