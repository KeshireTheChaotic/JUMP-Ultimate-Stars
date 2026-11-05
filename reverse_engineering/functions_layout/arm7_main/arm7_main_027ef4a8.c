
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ef4a8(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  
                    /* JUS-TAG hw={"WIRELESS":9}
                       io=["04804008","0480400a","0480400c","04808004","04808012","04808040","048080a0","048080ae","04808194"]
                        */
  iVar1 = _DAT_0380fff4;
  FUN_037f8ef4();
  FUN_037f93b0();
  uVar2 = FUN_027e9ba0(6);
  *(undefined2 *)(iVar1 + 0x3f0) = uVar2;
  if (*(short *)(param_1 + 0x12) == 4) {
    FUN_027e9b60(6,0);
  }
  MIi_CpuClear16(0,&DAT_04804000,0xc);
  _DAT_04804008 = 0x14;
  _DAT_0480400a = 2000;
  uVar4 = 0;
  puVar3 = (undefined2 *)&DAT_0480400c;
  do {
    *puVar3 = 0x5555;
    uVar4 = uVar4 + 2;
    puVar3 = puVar3 + 1;
  } while (uVar4 < 0x7ec);
  _DAT_0480400c = 8;
  _DAT_04808194 = 6;
  *(undefined2 *)(iVar1 + 0x34c) = 0x12;
  *(undefined2 *)(iVar1 + 0x35c) = 1;
  FUN_027ea66c(*(undefined2 *)(param_1 + 0x16));
  _DAT_04808040 = 0x8000;
  FUN_027e9788(0x5dc);
  _DAT_04808012 = 2;
  _DAT_04808004 = 1;
  _DAT_048080ae = 1;
  _DAT_048080a0 = 0x8000;
  return;
}

