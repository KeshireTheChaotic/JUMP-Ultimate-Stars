
void FUN_02029ca0(int param_1,int param_2,int param_3,uint param_4,ushort param_5)

{
  ushort uVar1;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < param_4; uVar2 = uVar2 + 1) {
    if ((uint)param_5 == *(uint *)(param_2 + uVar2 * 4)) {
      *(undefined2 *)(uVar2 * 2 + *(int *)(param_1 + 0x10) + param_3 * 2) = 0;
    }
    else {
      uVar1 = *(ushort *)(param_2 + uVar2 * 4);
      *(ushort *)(uVar2 * 2 + *(int *)(param_1 + 0x10) + param_3 * 2) =
           (ushort)(((int)(uint)(uVar1 >> 8) >> 3) << 5) |
           (ushort)((int)(*(ushort *)(param_2 + uVar2 * 4 + 2) & 0xff) >> 3) |
           (ushort)(((int)(uVar1 & 0xff) >> 3) << 10) | 0x8000;
    }
  }
  FUN_02029dc4(param_1);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return;
}

