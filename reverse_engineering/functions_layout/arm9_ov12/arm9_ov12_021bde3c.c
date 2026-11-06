
void FUN_021bde3c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short local_18;
  
  MIi_CpuClear16(0,&local_20,10);
  uVar2 = 1;
  do {
    uVar3 = *(uint *)(DAT_021d525c + (uVar2 - 1) * 4 + 0x14e8);
    if (uVar3 < 0xc) {
      (*(code *)((int)&switchD_021bde76::switchdataD_021bde78 +
                (int)(short)(&switchD_021bde76::switchdataD_021bde78)[uVar3]))(1);
      return;
    }
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 0x10);
  if (local_1a == 0) {
    if (local_20 == 0) {
      if (local_18 == 0) {
        if (local_1c == 0) {
          if (local_1e == 0) {
            iVar1 = FUN_021bdf40();
          }
          else {
            iVar1 = FUN_021be160();
          }
        }
        else {
          iVar1 = FUN_021be280(2);
        }
      }
      else {
        iVar1 = FUN_021be280(6);
      }
    }
    else {
      iVar1 = FUN_021be280(1);
    }
  }
  else {
    iVar1 = FUN_021be280(5);
  }
  if (iVar1 == 0x15) {
    FUN_021be280(0,0xffff);
  }
  return;
}

