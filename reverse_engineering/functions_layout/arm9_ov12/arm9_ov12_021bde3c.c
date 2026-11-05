
void FUN_021bde3c(void)

{
  int iVar1;
  uint uVar2;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  
  MIi_CpuClear16(0,&local_20,10);
  uVar2 = 1;
  do {
    switch(*(undefined4 *)(DAT_021d525c + (uVar2 - 1) * 4 + 0x14e8)) {
    case 2:
      local_20 = local_20 | (ushort)(1 << (uVar2 & 0xff));
      break;
    case 4:
      local_1c = local_1c | (ushort)(1 << (uVar2 & 0xff));
      break;
    case 5:
      local_1e = local_1e | (ushort)(1 << (uVar2 & 0xff));
      break;
    case 8:
      local_1a = local_1a | (ushort)(1 << (uVar2 & 0xff));
      break;
    case 0xb:
      local_18 = local_18 | (ushort)(1 << (uVar2 & 0xff));
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

