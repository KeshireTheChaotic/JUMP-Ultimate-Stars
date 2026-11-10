
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* JUS-CLASS jus_HwDisplayMain::vfunc_23 [class-virtual] slot 23 of vtable 020972e0 (own slot, not
   inherited) */

void jus_HwDisplayMain::vfunc_23
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  
                    /* JUS-TAG hw={"GX_2D_main":9}
                       io=["04000000","04000040","04000042","04000044","04000046","04000048","0400004a","0400004d","04000050"]
                        */
  jus_Class_0209737c::vfunc_23();
  if (*(char *)(param_1 + 0x902) != '\0') {
    iVar1 = *(int *)(param_1 + 0x8f0);
    if (iVar1 == 0) {
      _DAT_04000050 = 0;
    }
    else if (iVar1 == 1) {
      param_4 = *(undefined4 *)(param_1 + 0x8c4);
      FUN_02066048(&DAT_04000050,*(uint *)(param_1 + 0x8e8) & 0x3f,*(uint *)(param_1 + 0x8ec) & 0x3f
                   ,*(undefined4 *)(param_1 + 0x8c0),param_4);
    }
    else if (iVar1 == 2) {
      FUN_0206602c(&DAT_04000050,*(uint *)(param_1 + 0x8e8) & 0x3f,*(undefined4 *)(param_1 + 0x8f4))
      ;
    }
    uVar2 = *(uint *)(param_1 + 0x8f0);
    if (uVar2 != 0) {
      uVar4 = *(uint *)(param_1 + 0x8e8);
      if (uVar4 < 0x40) {
        uVar2 = *(uint *)(param_1 + 0x8ec);
      }
      if (uVar4 >= 0x40 || 0x3f < uVar2) {
        *(bool *)(param_1 + 0x8fd) = ((uVar4 | *(uint *)(param_1 + 0x8ec)) & 0x40) != 0;
        *(bool *)(param_1 + 0x8fe) =
             ((*(uint *)(param_1 + 0x8e8) | *(uint *)(param_1 + 0x8ec)) & 0x80) != 0;
        *(bool *)(param_1 + 0x900) =
             ((*(uint *)(param_1 + 0x8e8) | *(uint *)(param_1 + 0x8ec)) & 0x100) != 0;
        *(bool *)(param_1 + 0x8ff) =
             ((*(uint *)(param_1 + 0x8e8) | *(uint *)(param_1 + 0x8ec)) & 0x200) != 0;
        *(undefined1 *)(param_1 + 0x901) = 1;
      }
    }
    *(undefined1 *)(param_1 + 0x902) = 0;
    FUN_02064e00(&DAT_0400006c,*(undefined4 *)(param_1 + 0x8f8));
  }
  if (*(char *)(param_1 + 0x901) != '\0') {
    _DAT_04000000 = _DAT_04000000 & 0xffff1fff | *(int *)(param_1 + 0x8bc) << 0xd;
    _DAT_04000040 = *(short *)(param_1 + 0x8d8) << 8 | *(ushort *)(param_1 + 0x8dc) & 0xff;
    _DAT_04000044 = *(short *)(param_1 + 0x8da) << 8 | *(ushort *)(param_1 + 0x8de) & 0xff;
    _DAT_04000042 = *(short *)(param_1 + 0x8e0) << 8 | *(ushort *)(param_1 + 0x8e4) & 0xff;
    _DAT_04000046 = *(short *)(param_1 + 0x8e2) << 8 | *(ushort *)(param_1 + 0x8e6) & 0xff;
    uVar3 = _DAT_04000048 & 0xffc0 | (ushort)*(undefined4 *)(param_1 + 0x8c8) & 0x3f;
    if (*(char *)(param_1 + 0x8fd) != '\0') {
      uVar3 = uVar3 | 0x20;
    }
    _DAT_04000048 = uVar3 & 0xc0ff | (ushort)((*(uint *)(param_1 + 0x8cc) & 0x3f) << 8);
    if (*(char *)(param_1 + 0x8fe) != '\0') {
      _DAT_04000048 = _DAT_04000048 | 0x2000;
    }
    FUN_0203b810(*(uint *)(param_1 + 0x8d0) & 0x3f,*(undefined1 *)(param_1 + 0x900),uVar3 & 0xc0ff,
                 _DAT_04000042,param_4);
    _DAT_0400004a = _DAT_0400004a & 0xffc0 | (ushort)*(undefined4 *)(param_1 + 0x8d4) & 0x3f;
    if (*(char *)(param_1 + 0x8ff) != '\0') {
      _DAT_0400004a = _DAT_0400004a | 0x20;
    }
    FUN_0203b810(*(undefined1 *)(param_1 + 0x8ff),*(undefined1 *)(param_1 + 0x8ff));
    *(undefined1 *)(param_1 + 0x901) = 0;
  }
  if (*(char *)(param_1 + 0x904) == '\0') {
    return;
  }
  DAT_0400004d = *(byte *)(param_1 + 0x905) | *(char *)(param_1 + 0x906) << 4;
  *(undefined1 *)(param_1 + 0x904) = 0;
  return;
}

