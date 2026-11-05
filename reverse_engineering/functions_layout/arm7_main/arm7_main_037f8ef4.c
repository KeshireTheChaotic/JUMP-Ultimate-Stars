
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037f8ef4(void)

{
  int iVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
                    /* JUS-TAG hw={"WIRELESS":27}
                       io=["04808004","04808008","0480800a","04808010","04808012","04808028","0480802a","04808030","04808032","04808038","04808044","04808048","048080ae","048080d0","048080e0","048080e8","048080ea","048080f0","048080f2","048080f4","048080f6","048080f8","048080fa","048080fc"]
                        */
  iVar4 = _DAT_0380fff4;
  FUN_037f93b0();
  FUN_027e937c((uint)_DAT_04808044 + (uint)_DAT_04808044 * 0x100,_DAT_04808044);
  *(undefined2 *)(iVar4 + 0x3c0) = 1;
  if ((*(ushort *)(iVar4 + 0x33a) & 7) >> 2 == 1) {
    *(ushort *)(iVar4 + 0x3c0) = *(ushort *)(iVar4 + 0x3c0) | 0x20;
  }
  if (*(short *)(iVar4 + 0x334) != 0) {
    *(ushort *)(iVar4 + 0x3c0) = *(ushort *)(iVar4 + 0x3c0) | 0x10;
  }
  *(undefined2 *)(iVar4 + 0x356) = 0;
  _DAT_04808032 = 0x8000;
  _DAT_04808134 = 0xffff;
  _DAT_0480802a = 0;
  _DAT_04808028 = 0;
  _DAT_04808038 = 0xf;
  FUN_027ebcec();
  FUN_027f55b8();
  FUN_037fb264();
  FUN_037fb610();
  _DAT_04808030 = 0x8000;
  _DAT_04808010 = 0xffff;
  _DAT_048081ae = 0x1fff;
  if ((*(ushort *)(_DAT_0380fff4 + 0x690) & 8) == 0) {
    _DAT_048081aa = 0;
  }
  else {
    _DAT_048081aa = 0x400;
  }
  _DAT_04808008 = 0;
  _DAT_0480800a = 0;
  switch(*(undefined2 *)(iVar4 + 0x350)) {
  case 0:
    _DAT_04808012 = 0x3f;
    _DAT_048080d0 = 0xffff;
    _DAT_048080e0 = 8;
    _DAT_04808008 = 0;
    _DAT_0480800a = 0;
    _DAT_048080e8 = 0;
    _DAT_04808004 = 1;
    _DAT_048080f4 = CONCAT22(_DAT_048080f6,_DAT_048080f4);
    break;
  case 1:
    _DAT_04808012 = 0x703f;
    _DAT_048081ae = 0x1fff;
    _DAT_048080d0 = 0x301;
    _DAT_048080e0 = 0xd;
    _DAT_04808008 = 0xe000;
    _DAT_04808004 = 1;
    local_20 = CONCAT22(_DAT_048080fa,_DAT_048080f8);
    local_1c = CONCAT22(_DAT_048080fe,_DAT_048080fc);
    uVar2 = *(ushort *)(iVar4 + 0x3b2);
    iVar1 = (uint)uVar2 * 0x400;
    lVar5 = FUN_038076b8(local_20,local_1c,iVar1,0);
    lVar3 = (ulonglong)uVar2 * 0x400 * (lVar5 + 1U & 0xffffffff);
    _DAT_048080f4 = (int)(lVar5 + 1U >> 0x20) * iVar1 + (int)((ulonglong)lVar3 >> 0x20);
    local_20._2_2_ = (undefined2)((ulonglong)lVar3 >> 0x10);
    _DAT_048080f2 = local_20._2_2_;
    _DAT_048080f0 = (ushort)lVar3 | 1;
    _DAT_048080e8 = 1;
    _DAT_048080ea = 1;
    FUN_037f9468(0x40);
    FUN_027f1450();
    _DAT_048080ae = 2;
    break;
  case 2:
    _DAT_04808012 = 0xe03f;
    if ((*(ushort *)(_DAT_0380fff4 + 0x690) & 0x20) != 0) {
      _DAT_04808012 = 0xe0ff;
    }
    if ((*(ushort *)(_DAT_0380fff4 + 0x690) & 0x20) != 0) {
      _DAT_048081aa = _DAT_048081aa | 0x68;
    }
    if ((*(ushort *)(iVar4 + 0x3a8) & 1) == 0) {
      _DAT_048080d0 = 0x181;
    }
    else {
      _DAT_048080d0 = 0x581;
    }
    _DAT_048080e0 = 0xb;
    _DAT_04808004 = 1;
    _DAT_048080e8 = 1;
    _DAT_048080ea = 1;
    FUN_037f9468(0x20);
    _DAT_048080f4 = CONCAT22(_DAT_048080f6,_DAT_048080f4);
    break;
  case 3:
    _DAT_04808010 = 0xffff;
    _DAT_04808012 = 0xc03f;
    if ((*(ushort *)(iVar4 + 0x3a8) & 1) == 0) {
      _DAT_048080d0 = 1;
    }
    else {
      _DAT_048080d0 = 0x401;
    }
    _DAT_048080e0 = 0xb;
    _DAT_04808004 = 1;
    _DAT_048080e8 = 1;
    _DAT_048080ea = 1;
    _DAT_04808048 = 0;
    FUN_037f9468(0x20);
    _DAT_048080f4 = CONCAT22(_DAT_048080f6,_DAT_048080f4);
    break;
  case 4:
    _DAT_04808012 = 0;
    _DAT_048081ae = 0;
    _DAT_04808004 = 1;
    FUN_037f9468(0x20);
    _DAT_048080f4 = CONCAT22(_DAT_048080f6,_DAT_048080f4);
  }
  _DAT_04808048 = 0;
  FUN_027ea318();
  _DAT_048080ae = 2;
  if (*(short *)(iVar4 + 0x352) == 1) {
    FUN_027ea4f0();
  }
  FUN_037fb784();
  return;
}

