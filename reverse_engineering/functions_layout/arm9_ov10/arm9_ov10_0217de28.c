
void FUN_0217de28(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 != 0) {
    FUN_0218dd5c();
    if (*(int *)(param_1 + 0xb4) == 0) {
      iVar2 = FUN_02178448();
      cVar1 = *(char *)(iVar2 + 0x15);
      if ((cVar1 == '\0') || (cVar1 == '\x01')) {
        iVar2 = FUN_02178448();
        if (*(uint *)(iVar2 + 0x198) < 0xc) {
                    /* WARNING: Switch is manually overridden */
          switch(*(uint *)(iVar2 + 0x198)) {
          case 1:
            iVar2 = FUN_02178448();
            FUN_0218dbe8(*(undefined4 *)(iVar2 + 0x10));
            return;
          }
        }
      }
      else {
        if (cVar1 != '\x02') {
          return;
        }
        iVar2 = FUN_02178448();
        if (*(int *)(iVar2 + 0x198) == 0xb) {
          iVar2 = FUN_02178448();
          FUN_0218dbe8(*(undefined4 *)(iVar2 + 0x10));
        }
      }
    }
  }
  return;
}

