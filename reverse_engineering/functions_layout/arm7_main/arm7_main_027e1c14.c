
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e1c14(int param_1)

{
  short *psVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027fff98"] */
  psVar1 = DAT_027f97f0;
  uVar2 = (ushort)((int)(uint)*(byte *)(param_1 + 0x1f) >> 2);
  if ((*(byte *)(param_1 + 0x1f) & 2) == 0) {
    uVar2 = uVar2 + 0x19;
  }
  _DAT_027fff98 =
       uVar2 ^ (ushort)((uint)_DAT_027fff98 << 1) ^ (ushort)(((uint)_DAT_027fff98 << 1) >> 0x10);
  if ((*DAT_027f97f0 == 8) || (*DAT_027f97f0 == 10)) {
    if (DAT_027f97f0[0x5d] == *(short *)(param_1 + 0x44)) {
      if (DAT_027f97f0[0x61] != 0) {
        puVar5 = (undefined2 *)FUN_03808074();
        *puVar5 = 0x80;
        puVar5[1] = 0;
        puVar5[2] = 0x10;
        puVar5[3] = *(undefined2 *)(param_1 + 0x44);
        puVar5[4] = *psVar1;
        puVar5[5] = *(undefined2 *)(param_1 + 0x16);
        if ((ushort)puVar5[5] < 0x81) {
          MIi_CpuCopy16(param_1 + 0x3c,puVar5 + 6,(ushort)puVar5[5] + 1 & 0xfffffffe);
        }
        FUN_038080d0(puVar5);
      }
    }
    else {
      puVar3 = (undefined4 *)FUN_027e0134();
      if (puVar3 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        *puVar3 = 0x25;
        puVar3[1] = 1;
        puVar3[2] = 0x8002;
        iVar4 = FUN_037fcc6c(&DAT_027f8328,puVar3,0);
      }
      if (iVar4 == 0) {
        puVar5 = (undefined2 *)FUN_03808074();
        *puVar5 = 0x80;
        puVar5[1] = 8;
        puVar5[2] = 0x16;
        puVar5[3] = 0x25;
        FUN_038080d0();
      }
    }
  }
  return;
}

