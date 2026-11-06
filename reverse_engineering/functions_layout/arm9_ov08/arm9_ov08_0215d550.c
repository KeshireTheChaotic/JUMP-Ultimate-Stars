
void FUN_0215d550(uint param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 unaff_r5;
  undefined1 auStack_38 [40];
  
  iVar1 = FUN_021622d4();
  if (param_1 < 9) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      FUN_0215d274(iVar1 + 0x40,param_2);
      return;
    case 1:
      bVar2 = *(byte *)(iVar1 + 0xe6) & 3;
      if (bVar2 < 4) {
                    /* WARNING: Switch is manually overridden */
        switch(bVar2) {
        case 0:
          return;
        case 1:
          unaff_r5 = 10;
          break;
        case 2:
          unaff_r5 = 0x1a;
          break;
        case 3:
          unaff_r5 = 0x20;
        }
      }
      if (*(byte *)(iVar1 + 0xe6) >> 2 == 1) {
        unaff_r5 = FUN_0200d12c(unaff_r5,2);
      }
      FUN_020517fc(auStack_38,0,0x21);
      FUN_02002488(auStack_38,0x2a,unaff_r5);
      FUN_0215d274(auStack_38,param_2);
      return;
    case 3:
      if (*(char *)(iVar1 + 0xf5) == '\0') {
        FUN_0215d224(iVar1 + 0xc0,param_2);
        return;
      }
      break;
    case 4:
      if (*(char *)(iVar1 + 0xf5) == '\0') {
        FUN_0215d224(iVar1 + 0xf0,param_2);
        return;
      }
      break;
    case 5:
      if (*(char *)(iVar1 + 0xf5) == '\0') {
        FUN_0215d224(iVar1 + 0xc4,param_2);
        return;
      }
      break;
    case 7:
      if (*(char *)(iVar1 + 0xf6) == '\0') {
        FUN_0215d224(iVar1 + 200,param_2);
        return;
      }
      break;
    case 8:
      if (*(char *)(iVar1 + 0xf6) == '\0') {
        FUN_0215d224(iVar1 + 0xcc,param_2);
      }
    }
  }
  return;
}

