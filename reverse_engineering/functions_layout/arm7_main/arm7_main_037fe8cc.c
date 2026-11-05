
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fe8cc(void)

{
  uint uVar1;
  int iVar2;
  uint local_28;
  
  while( true ) {
    if ((_DAT_04000184 & 0x4000) == 0) {
      OS_DisableInterrupts();
      if ((_DAT_04000184 & 0x100) == 0) {
        local_28 = _DAT_04100000;
        OS_RestoreInterrupts();
        iVar2 = 0;
      }
      else {
        OS_RestoreInterrupts();
        iVar2 = -4;
      }
    }
    else {
      _DAT_04000184 = _DAT_04000184 | 0xc000;
      iVar2 = -3;
    }
    if (iVar2 == -4) break;
    if ((iVar2 != -3) && (uVar1 = local_28 & 0x1f, uVar1 != 0)) {
      if ((code *)(&DAT_03808498)[uVar1] == (code *)0x0) {
        if ((local_28 & 0x3f) >> 5 == 0) {
          local_28 = local_28 | 0x20;
          if ((_DAT_04000184 & 0x4000) == 0) {
            OS_DisableInterrupts();
            if ((_DAT_04000184 & 2) == 0) {
              _DAT_04000188 = local_28;
              OS_RestoreInterrupts();
            }
            else {
              OS_RestoreInterrupts();
            }
          }
          else {
            _DAT_04000184 = _DAT_04000184 | 0xc000;
          }
        }
      }
      else {
        (*(code *)(&DAT_03808498)[uVar1])(uVar1,local_28 >> 6,(local_28 & 0x3f) >> 5);
      }
    }
  }
  return;
}

