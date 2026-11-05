
undefined4 FUN_0217a93c(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_02178448();
  if (*(char *)(iVar2 + 0x17) != '\0') {
    iVar2 = FUN_02178448();
    iVar3 = FUN_02178448();
    if (*(int *)(iVar2 + 0x20) == *(int *)(iVar3 + 0x1f8)) {
      bVar1 = false;
      goto LAB_0217a964;
    }
  }
  bVar1 = true;
LAB_0217a964:
  if (bVar1) {
    iVar2 = FUN_02178448();
    *(undefined1 *)(iVar2 + 0x17) = 0;
    iVar2 = FUN_02178448();
    *(undefined4 *)(iVar2 + 0x20) = 0;
    iVar2 = FUN_02178448();
    FUN_0218dbe8(*(undefined4 *)(iVar2 + 0x10));
  }
  iVar2 = FUN_02178448();
  if (*(byte *)(iVar2 + 0xd) < 0x1f) {
    iVar2 = FUN_02178448();
    iVar3 = FUN_02178448();
    *(undefined4 *)(iVar2 + (*(byte *)(iVar3 + 0xd) + 1) * 4 + 0xf4) = 0;
  }
  iVar2 = FUN_02178448();
  *(undefined1 *)(iVar2 + 0x3c4) = 0xff;
  iVar2 = FUN_02178448();
  if (*(int *)(iVar2 + 0x194) != 0) {
    iVar2 = FUN_02178448();
    FUN_0218c8bc(*(undefined4 *)(iVar2 + 0x194));
    iVar2 = FUN_02178448();
    *(undefined4 *)(iVar2 + 0x194) = 0;
  }
  iVar2 = FUN_02178448();
  iVar3 = FUN_02178448();
  *(undefined1 *)(iVar2 + 0x14) = *(undefined1 *)(iVar3 + 0xd);
  iVar2 = FUN_02178448();
  *(undefined4 *)(iVar2 + 0x1fc) = 0;
  if (bVar1) {
    iVar2 = FUN_02178448();
    if (*(char *)(iVar2 + 0x15) == '\0') {
      FUN_02178434(3);
      iVar2 = FUN_02178448();
      *(undefined4 *)(iVar2 + 0xe8) = 2;
      iVar2 = FUN_02178448();
      uVar5 = FUN_02054b44();
      *(undefined8 *)(iVar2 + 0xec) = uVar5;
    }
    else {
      iVar2 = FUN_02178448();
      if (*(char *)(iVar2 + 0x15) == '\x01') {
        FUN_02178434(4);
        FUN_0217abc4(1,0,0);
      }
      else {
        iVar2 = FUN_02178448();
        if (*(char *)(iVar2 + 0x15) == '\x02') {
          FUN_02178434(0xe);
          iVar2 = FUN_02178448();
          *(undefined4 *)(iVar2 + 0x1d0) = 0;
          iVar2 = FUN_02178448();
          *(undefined2 *)(iVar2 + 0x1aa) = 0;
          FUN_02179e70(param_1);
          iVar3 = 1;
          iVar2 = FUN_02178448();
          if (*(char *)(iVar2 + 0xd) != '\0') {
            iVar2 = 4;
            do {
              iVar4 = FUN_02178448();
              iVar4 = FUN_02179a58(*(undefined4 *)(iVar4 + iVar2 + 0xf4),0xd);
              if (iVar4 == 0) {
                return 0;
              }
              iVar2 = iVar2 + 4;
              iVar3 = iVar3 + 1;
              iVar4 = FUN_02178448();
            } while (iVar3 <= (int)(uint)*(byte *)(iVar4 + 0xd));
          }
          iVar2 = FUN_02178448();
          if (*(char *)(iVar2 + 0xd) == '\0') {
            FUN_02179f88(2);
          }
        }
      }
    }
  }
  else {
    iVar2 = FUN_02178448();
    if (*(char *)(iVar2 + 0x15) != '\x03') {
      FUN_02179f60();
    }
  }
  return 1;
}

