
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027ee4b4(undefined4 param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (1 < *(ushort *)(param_2 + 2)) {
    *(undefined2 *)(param_2 + 6) = *(undefined2 *)(_DAT_0380fff4 + 0x3e4);
  }
  if ((int)((*(ushort *)(param_2 + 2) - 2) * 2) < (int)(uint)*(ushort *)(_DAT_0380fff4 + 0x3e4)) {
    uVar2 = 4;
  }
  else {
    if (*(ushort *)(param_2 + 6) != 0) {
      if ((*(ushort *)(_DAT_0380fff4 + 0x3e6) & 1) == 0) {
        MIi_CpuCopy16(*(undefined4 *)(_DAT_0380fff4 + 0x3e0),param_2 + 8,
                      *(ushort *)(param_2 + 6) + 1);
      }
      else {
        iVar3 = *(int *)(_DAT_0380fff4 + 0x3e0);
        iVar5 = param_2 + 8;
        for (uVar4 = 0; iVar3 = iVar3 + 1, uVar4 < *(ushort *)(param_2 + 6); uVar4 = uVar4 + 1) {
          uVar2 = FUN_027e93b0(iVar3);
          FUN_027e93d0(iVar5,uVar2);
          iVar5 = iVar5 + 1;
        }
      }
    }
    sVar1 = FUN_038078c0(*(ushort *)(param_2 + 6) + 1,2);
    *(short *)(param_2 + 2) = sVar1 + 2;
    uVar2 = 0;
  }
  return uVar2;
}

