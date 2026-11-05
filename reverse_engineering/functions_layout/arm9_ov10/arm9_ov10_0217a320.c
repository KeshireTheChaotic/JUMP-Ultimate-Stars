
void FUN_0217a320(undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 local_38;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  
  local_38 = 3;
  bVar1 = false;
  switch(param_1) {
  case 0:
    iVar9 = FUN_02178448();
    iVar6 = FUN_02178448();
    if ((int)(uint)*(byte *)(iVar9 + 0x19c) < (int)(*(byte *)(iVar6 + 0xd) - 1)) {
      FUN_02178434(0xd);
      iVar9 = FUN_02178448();
      iVar6 = FUN_02178448();
      local_28 = *(undefined4 *)(iVar9 + (*(byte *)(iVar6 + 0x19c) + 1) * 4 + 0xf4);
      iVar9 = FUN_02178448();
      local_24 = *(byte *)(iVar9 + 0x19c) + 1;
      iVar9 = FUN_02178448();
      iVar6 = FUN_02178448();
      local_20 = (uint)*(byte *)(iVar9 + (uint)*(byte *)(iVar6 + 0x19c) + 0x2c9);
      iVar9 = FUN_02178448();
      iVar6 = FUN_02178448();
      local_1c = *(undefined4 *)(iVar9 + (*(byte *)(iVar6 + 0x19c) + 1) * 4 + 0x24);
      iVar9 = FUN_02178448();
      iVar6 = FUN_02178448();
      local_18 = (uint)*(ushort *)(iVar9 + (*(byte *)(iVar6 + 0x19c) + 1) * 2 + 0xa4);
      local_38 = 5;
    }
    else {
      iVar9 = FUN_02178448();
      *(undefined1 *)(iVar9 + 0x17) = 0;
      iVar9 = FUN_02178448();
      *(undefined4 *)(iVar9 + 0x20) = 0;
      iVar9 = FUN_02178448();
      FUN_0218dbe8(*(undefined4 *)(iVar9 + 0x10));
      iVar9 = FUN_02178448();
      if (*(char *)(iVar9 + 0x15) == '\0') {
        FUN_02178434(3);
      }
      else {
        iVar9 = FUN_02178448();
        if (*(char *)(iVar9 + 0x15) == '\x01') {
          FUN_02178434(4);
        }
        else {
          FUN_02178434(10);
        }
      }
      iVar9 = FUN_02178448();
      *(undefined1 *)(iVar9 + 0x19c) = 0;
      iVar9 = FUN_02178448();
      if (*(char *)(iVar9 + 0x15) == '\x02') {
LAB_0217a442:
        iVar9 = FUN_02178448();
        if (*(char *)(iVar9 + 0x15) == '\x02') {
          iVar9 = FUN_02178448();
          iVar6 = FUN_02178448();
          iVar7 = FUN_02178448();
          *(undefined4 *)(iVar9 + 0x204) =
               *(undefined4 *)(iVar6 + (uint)*(byte *)(iVar7 + 0xd) * 4 + 0xf4);
        }
        else {
          iVar9 = FUN_02178448();
          *(undefined4 *)(iVar9 + 0x204) = 0;
          iVar9 = FUN_02178448();
          iVar6 = FUN_02178448();
          *(undefined4 *)(iVar9 + 0xf4) = *(undefined4 *)(iVar6 + 0x1f8);
        }
        FUN_02178434(0x10);
        iVar9 = FUN_02178448();
        *(undefined4 *)(iVar9 + 0x1cc) = 0;
        iVar6 = 1;
        iVar9 = FUN_02178448();
        if (*(char *)(iVar9 + 0xd) != '\0') {
          do {
            iVar9 = FUN_02178448();
            FUN_02179ca8(*(undefined1 *)(iVar9 + iVar6 + 0x2c8),2);
            iVar6 = iVar6 + 1;
            iVar9 = FUN_02178448();
          } while (iVar6 <= (int)(uint)*(byte *)(iVar9 + 0xd));
        }
      }
      else {
        iVar9 = FUN_02178448();
        iVar6 = FUN_02178448();
        if (*(char *)(iVar9 + 0xd) == *(char *)(iVar6 + 0x16)) goto LAB_0217a442;
        local_28 = 0;
        iVar9 = FUN_02178448();
        local_24 = (uint)*(byte *)(iVar9 + 0xd);
        iVar9 = FUN_02178448();
        iVar6 = FUN_02178448();
        local_20 = (uint)*(byte *)(iVar9 + (uint)*(byte *)(iVar6 + 0xd) + 0x2c8);
        iVar9 = FUN_02178448();
        if (*(char *)(iVar9 + 0x15) == '\0') {
          iVar9 = FUN_02178448();
          *(undefined4 *)(iVar9 + 0xe8) = 2;
          iVar9 = FUN_02178448();
          uVar10 = FUN_02054b44();
          *(undefined8 *)(iVar9 + 0xec) = uVar10;
        }
        else {
          iVar9 = FUN_02178448();
          if (*(char *)(iVar9 + 0x15) == '\x01') {
            FUN_0217abc4(1,0,0);
            iVar9 = FUN_02178448();
            if ((*(char *)(iVar9 + 0x19e) == '\0') &&
               (iVar9 = FUN_02178448(), 1 < *(byte *)(iVar9 + 0xd))) {
              iVar9 = FUN_02178448();
              uVar2 = FUN_021794e0(0);
              iVar6 = FUN_02178448();
              iVar7 = FUN_02178448();
              if (*(uint *)(iVar9 + 0x1d4) !=
                  (uVar2 & ~(1 << (uint)*(byte *)(iVar6 + (uint)*(byte *)(iVar7 + 0xd) + 0x2c8)))) {
                FUN_02179f60();
                break;
              }
            }
          }
        }
      }
      iVar9 = FUN_02178448();
      if (*(char *)(iVar9 + 0x15) != '\x02') {
        bVar1 = true;
      }
    }
    iVar9 = FUN_02178448();
    if (*(int *)(iVar9 + 0x198) != 0x10) {
      iVar9 = FUN_02178448();
      iVar6 = FUN_02178448();
      iVar7 = FUN_02178448();
      iVar4 = FUN_02178448();
      iVar5 = FUN_02178448();
      iVar3 = FUN_02178448();
      FUN_0217c024(8,*(undefined4 *)(iVar9 + (uint)*(byte *)(iVar6 + 0xd) * 4 + 0xf4),
                   *(undefined4 *)(iVar7 + (uint)*(byte *)(iVar4 + 0xd) * 4 + 0x24),
                   *(undefined2 *)(iVar5 + (uint)*(byte *)(iVar3 + 0xd) * 2 + 0xa4),&local_28,
                   local_38);
      iVar9 = FUN_0217af70();
      if (iVar9 != 0) {
        return;
      }
      iVar9 = FUN_02178448();
      *(undefined1 *)(iVar9 + 0x3c5) = 0;
    }
    break;
  case 1:
    FUN_02178434(1);
    iVar9 = FUN_02178448();
    if (*(char *)(iVar9 + 0x15) == '\x03') {
      iVar9 = FUN_02178448();
      iVar6 = FUN_02178448();
      iVar7 = FUN_02178448();
      *(undefined4 *)(iVar9 + 0x204) =
           *(undefined4 *)(iVar6 + (uint)*(byte *)(iVar7 + 0xd) * 4 + 0xf4);
    }
    bVar1 = true;
    break;
  case 2:
    FUN_02178434(1);
    iVar9 = FUN_02178448();
    if ((*(char *)(iVar9 + 0x15) == '\0') ||
       (iVar9 = FUN_02178448(), *(char *)(iVar9 + 0x15) == '\x01')) {
      iVar9 = FUN_02178448();
      *(undefined1 *)(iVar9 + 0x17) = 1;
      iVar9 = FUN_02178448();
      iVar6 = FUN_02178448();
      *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(iVar6 + 0x1f8);
    }
    FUN_021794b4();
    iVar9 = FUN_02178448();
    if (1 < *(byte *)(iVar9 + 0xd)) {
      iVar9 = FUN_02178448();
      iVar6 = FUN_02178448();
      iVar7 = FUN_02178448();
      iVar4 = FUN_02178448();
      iVar5 = FUN_02178448();
      FUN_0217c024(9,*(undefined4 *)(iVar9 + 0xf4),*(undefined4 *)(iVar6 + 0x24),
                   *(undefined2 *)(iVar7 + 0xa4),iVar4 + 0xf4 + (*(byte *)(iVar5 + 0xd) - 1) * 4,1);
      iVar9 = FUN_0217af70();
      if (iVar9 != 0) {
        return;
      }
    }
    break;
  case 3:
    FUN_02178434(1);
    FUN_021794b4();
    iVar9 = FUN_02178448();
    *(undefined4 *)(iVar9 + 0x204) = 0;
    bVar1 = true;
    break;
  case 4:
    iVar9 = FUN_02178448();
    if (*(char *)(iVar9 + 0x15) != '\x02') {
      FUN_02177ea4(2,&DAT_021a4b88,0);
    }
    iVar9 = FUN_02178448();
    iVar9 = *(int *)(iVar9 + 0x204);
    iVar6 = FUN_02178448();
    iVar7 = FUN_02178448();
    uVar8 = FUN_02177f3c(*(undefined4 *)(iVar7 + 0x204));
    iVar7 = FUN_02178448();
    (**(code **)(iVar6 + 0x45c))(0,0,iVar9 == 0,0,uVar8,*(undefined4 *)(iVar7 + 0x460));
    iVar9 = FUN_02178448();
    if ((*(char *)(iVar9 + 0x15) == '\0') ||
       (iVar9 = FUN_02178448(), *(char *)(iVar9 + 0x15) == '\x01')) {
      FUN_0217c5dc();
    }
    else {
      iVar9 = FUN_02178448();
      if (*(int *)(iVar9 + 0xe4) != 0) {
        iVar9 = FUN_02178448();
        FUN_0217fdb0(*(undefined4 *)(iVar9 + 0xe4));
        iVar9 = FUN_02178448();
        *(undefined4 *)(iVar9 + 0xe4) = 0;
      }
      FUN_0218cd38();
      iVar9 = FUN_02178448();
      if (*(char *)(iVar9 + 0x15) == '\x02') {
        FUN_0217cacc();
        iVar9 = FUN_0217914c();
        if (iVar9 != 0) {
          return;
        }
        if (DAT_021a75b0 == '\x01') {
          DAT_021a75b1 = 1;
        }
        FUN_02178434(10);
      }
      else {
        FUN_02178434(1);
      }
      iVar9 = FUN_02178448();
      *(undefined4 *)(iVar9 + 0x204) = 0;
    }
    iVar9 = FUN_02178448();
    *(undefined1 *)(iVar9 + 0x1a1) = 0;
  }
  if ((bVar1) && (iVar9 = FUN_02178448(), *(char *)(iVar9 + 0x15) != '\x03')) {
    iVar9 = FUN_02178448();
    FUN_0217fc10(*(undefined4 *)(iVar9 + 0xe4));
  }
  return;
}

