
void FUN_0215cf68(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  piVar7 = (int *)(param_1 + 0x234);
  uStack_28 = param_4;
  for (iVar8 = 0; iVar8 < *(char *)(param_1 + 0x4d4); iVar8 = iVar8 + 1) {
    bVar9 = false;
    if ((*(byte *)(param_1 + 0x4df) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x4df) & 2) == 0) {
        iVar4 = *(int *)(param_1 + 0x20c);
        iVar5 = *(int *)(*piVar7 + 0x34);
        bVar10 = iVar4 != iVar5;
        if (bVar10) {
          iVar4 = *(int *)(param_1 + 0x210);
        }
        if (!bVar10 || iVar4 == iVar5) {
          bVar9 = true;
        }
      }
      else {
        bVar9 = *(char *)(*piVar7 + 0x40) != '\x02';
      }
    }
    else {
      bVar9 = *(char *)(*piVar7 + 0x40) == '\0';
    }
    if (bVar9) {
      FUN_0215ced4(&local_2c,piVar7[1]);
      FUN_0215b71c(local_2c);
      iVar4 = FUN_0215b6f4();
      FUN_02029c68(*(undefined4 *)(iVar4 + 4),piVar7 + 2,1,0xf);
    }
    else {
      iVar4 = 0;
      do {
        uVar6 = (uint)*(ushort *)((int)piVar7 + iVar4 * 2 + 8);
        uVar1 = FUN_0200d338(param_2 * ((int)uVar6 >> 10 & 0x1fU),param_3);
        uVar2 = FUN_0200d338(param_2 * (uVar6 & 0x1f),param_3);
        uVar3 = FUN_0200d338(param_2 * ((int)uVar6 >> 5 & 0x1fU),param_3);
        iVar5 = iVar4 * 2;
        iVar4 = iVar4 + 1;
        *(ushort *)(param_1 + iVar5 + 0x214) =
             uVar2 & 0x1f | (uVar3 & 0x1f) << 5 | (uVar1 & 0x1f) << 10;
      } while (iVar4 < 0xf);
      FUN_0215ced4(&local_30,piVar7[1]);
      FUN_0215b71c(local_30);
      iVar4 = FUN_0215b6f4();
      FUN_02029c68(*(undefined4 *)(iVar4 + 4),param_1 + 0x214,1,0xf);
    }
    piVar7 = piVar7 + 10;
  }
  return;
}

