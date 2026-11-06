
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02063104(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
                    /* JUS-TAG hw={"POSTFLG":1,"EXMEMCNT":1,"IRQ":1,"SYSTEM_SHARED":3}
                       io=["027ffc30","027ffc36","027ffc38","04000204","04000208","04000300"] */
  if ((DAT_020af510 == 0) && (DAT_020af510 = 1, (_DAT_04000300 & 1) != 0)) {
    uVar2 = OS_SetIrqMask(0x40000);
    uVar1 = _DAT_04000208;
    _DAT_04000208 = 1;
    FUN_02062eb8(DAT_020af50e,auStack_28);
    uVar3 = (uint)_DAT_04000204;
    FUN_02062f2c(auStack_20);
    _DAT_04000204 = _DAT_04000204 & 0x7fff;
    DC_InvalidateRange(&DAT_020af5c0,0x40);
    MI_DmaCopy16(1,0x8000080,&DAT_020af5c0,0x40);
    _DAT_04000204 = _DAT_04000204 & 0x7fff | (ushort)(((int)(uVar3 & 0x8000) >> 0xf) << 0xf);
    FUN_02062f00(auStack_20);
    FUN_02062e9c(DAT_020af50e,auStack_28);
    _DAT_027ffc30 = DAT_020af5fe;
    iVar4 = 0;
    do {
      *(undefined1 *)(iVar4 + 0x27ffc32) = (&DAT_020af5f5)[iVar4];
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    _DAT_027ffc36 = DAT_020af5f0;
    _DAT_027ffc38 = DAT_020af5ec;
    MIi_CpuCopy32(0xffff0020,&DAT_020af544,0x9c);
    FUN_02053fb0();
    FUN_02062e64(0x15ea81);
    while (DAT_020af50c != 1) {
      SVC_WaitByLoop(1);
    }
    _DAT_04000208 = uVar1;
    OS_SetIrqMask(uVar2);
  }
  return;
}

