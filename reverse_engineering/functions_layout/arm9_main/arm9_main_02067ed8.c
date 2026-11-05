
undefined4 FUN_02067ed8(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  
  iVar4 = func_0x02198ccc();
  bVar2 = *(byte *)(param_1 + 0xd13);
  if (iVar4 == 3) {
    uVar5 = FUN_02067d6c(param_1);
    pbVar7 = (byte *)(param_1 + 0xd15);
    *pbVar7 = *pbVar7 + 1;
    bVar1 = *pbVar7;
    if (3 < bVar1) {
      *pbVar7 = 0;
      *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0xd13) * 4 + 0x444) = 1;
      return 9;
    }
    if (bVar1 != 1) {
      cVar3 = *(char *)(param_1 + 0xd14);
      if (cVar3 == '\x01') {
        *(byte *)(param_1 + 0xd0b) = *(byte *)(param_1 + 0xd0b) & 0xf3;
      }
      else {
        if (cVar3 == '\x02') {
          *pbVar7 = 0;
          *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0xd13) * 4 + 0x444) = 3;
          return 9;
        }
        if (cVar3 == '\x03') {
          *pbVar7 = 0;
          *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0xd13) * 4 + 0x444) = 4;
          return 9;
        }
        if (bVar1 == 3) {
          *(byte *)(param_1 + 0xd0b) = *(byte *)(param_1 + 0xd0b) & 0xf3;
        }
      }
    }
    uVar6 = FUN_02067d4c(param_1);
    func_0x02198f54(param_1 + 0x470 + (uint)bVar2 * 0xc0,param_1 + 0xcb8,uVar5 | uVar6);
  }
  else if (iVar4 == 9) {
    *(undefined1 *)(param_1 + 0xd15) = 0;
    uVar8 = FUN_02054b44();
    *(undefined8 *)(param_1 + 0xcb0) = uVar8;
    return 10;
  }
  return 8;
}

