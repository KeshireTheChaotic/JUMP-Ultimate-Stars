
undefined4 FUN_0217ce60(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_02176640();
  if (iVar1 != 5) {
    return 0;
  }
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0x15) == '\x02') {
    return 1;
  }
  if (param_1 != 0) {
    FUN_0217d118(param_1,param_2 + -80000);
    return 1;
  }
  iVar1 = FUN_02178448();
  *(undefined1 *)(iVar1 + 0x2c8) = 0;
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0x1a1) != '\x01') {
    iVar1 = FUN_02178448();
    if (*(char *)(iVar1 + 0x1a0) != '\x01') {
      iVar1 = FUN_02178448();
      if (*(char *)(iVar1 + 0x1a0) != '\x02') {
        iVar1 = FUN_02178448();
        if (*(int *)(iVar1 + 0x194) != 0) {
          iVar1 = FUN_02178448();
          FUN_0218c8bc(*(undefined4 *)(iVar1 + 0x194));
          iVar1 = FUN_02178448();
          *(undefined4 *)(iVar1 + 0x194) = 0;
        }
        iVar1 = FUN_02178448();
        if (*(char *)(iVar1 + 0xd) == '\0') {
          iVar1 = FUN_02178448();
          if (*(char *)(iVar1 + 0x15) == '\x03') {
            FUN_0217d118(6,0xfffec5d2);
          }
          else {
            iVar1 = FUN_02178448();
            if (*(int *)(iVar1 + 0x200) == 0) {
              iVar1 = FUN_02178448();
              if (*(int *)(iVar1 + 0x198) == 1) {
                FUN_02178434(0x12);
                iVar1 = FUN_02178448();
                uVar2 = FUN_02054b44();
                *(undefined8 *)(iVar1 + 0x1e8) = uVar2;
              }
              else {
                FUN_02179f88(1);
              }
            }
            else {
              FUN_02179ed4();
            }
          }
        }
        else {
          iVar1 = FUN_02178448();
          if (*(char *)(iVar1 + 0x1a0) == '\0') {
            iVar1 = FUN_02178448();
            *(undefined1 *)(iVar1 + 0x1a0) = 3;
            iVar1 = FUN_02178448();
            FUN_0218a888(**(undefined4 **)(iVar1 + 4));
          }
        }
        return 1;
      }
    }
  }
  return 1;
}

