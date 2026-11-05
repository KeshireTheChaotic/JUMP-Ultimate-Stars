
/* JUS-GAME ALFont::Create [source-string] __FILE__="ALFont.cpp" __FUNCTION__="Create" lines=[583,
   593, 598, 619] passed to 5 source-location call(s) */

int * ALFont::Create(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  
  piVar7 = (int *)0x0;
  piVar1 = (int *)FUN_020325d0(&DAT_021d52f8,param_1);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_0203341c(param_1,0,0);
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar1 + 0x2c))(piVar1,0);
      if (*piVar2 == 0x54464c41) {
        iVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1,0);
        iVar4 = jus_AllocDebug(0x14,s_ALFont_cpp_021d5060,s_Create_021d4e6c,0x247);
        uVar5 = 0;
        if (iVar4 != 0) {
          uVar5 = ALFont_021d4ed0::ALFont_021d4ed0(iVar4,iVar3 + 0xe,*(undefined2 *)(iVar3 + 0xc));
        }
        if ((*(byte *)(iVar3 + 5) & 4) != 0) {
          FUN_021cace4(uVar5);
        }
        iVar4 = (uint)*(ushort *)(iVar3 + 0xc) * 6;
        uVar6 = iVar4 + 0xe;
        if ((uVar6 & 3) == 2) {
          uVar6 = iVar4 + 0x10;
        }
        piVar2 = (int *)thunk_FUN_02016628(piVar1,uVar6);
        if ((*(byte *)(iVar3 + 5) & 2) == 0) {
          iVar4 = jus_AllocDebug(0x6c,s_ALFont_cpp_021d5060,s_Create_021d4e6c,0x251);
          piVar7 = (int *)0x0;
          if (iVar4 != 0) {
            piVar7 = (int *)ALFont_021d4fb8::ALFont_021d4fb8
                                      (iVar4,piVar2,*(undefined1 *)(iVar3 + 8),
                                       *(undefined1 *)(iVar3 + 9),uVar5,*(undefined1 *)(iVar3 + 10))
            ;
          }
        }
        else {
          iVar4 = jus_AllocDebug(0x70,s_ALFont_cpp_021d5060,s_Create_021d4e6c,0x256);
          piVar7 = (int *)0x0;
          if (iVar4 != 0) {
            piVar7 = (int *)ALFont_021d4f60::ALFont_021d4f60
                                      (iVar4,piVar2,*(undefined1 *)(iVar3 + 8),
                                       *(undefined1 *)(iVar3 + 9),uVar5,*(undefined1 *)(iVar3 + 10))
            ;
          }
        }
        (**(code **)(*piVar2 + 0xc))();
        (**(code **)(*piVar1 + 0xc))();
      }
      else {
        (**(code **)(*piVar1 + 0xc))();
      }
    }
    if ((piVar7 == (int *)0x0) && (piVar1 = (int *)FUN_02016594(param_1), piVar1 != (int *)0x0)) {
      if ((uint)*(ushort *)((int)piVar1 + 10) * (uint)*(ushort *)(piVar1 + 2) < 0x30000) {
        iVar3 = jus_AllocDebug(0x6c,s_ALFont_cpp_021d5060,s_Create_021d4e6c,0x268);
        piVar7 = (int *)0x0;
        if (iVar3 != 0) {
          piVar7 = (int *)ALFont_021d4fb8::ALFont_021d4fb8(iVar3,piVar1,param_2,param_3,0,0x10);
        }
      }
      else {
        iVar3 = jus_AllocDebug(0x70,s_ALFont_cpp_021d5060,s_Create_021d4e6c,0x26b);
        piVar7 = (int *)0x0;
        if (iVar3 != 0) {
          piVar7 = (int *)ALFont_021d4f60::ALFont_021d4f60(iVar3,piVar1,param_2,param_3,0,0);
        }
      }
      (**(code **)(*piVar1 + 0xc))();
    }
    if (piVar7 != (int *)0x0) {
      FUN_0203263c(piVar7,param_1);
      *(undefined1 *)(piVar7 + 0x16) = 1;
      FUN_020324dc(&DAT_021d52f8,piVar7);
    }
  }
  else {
    (**(code **)(*piVar1 + 8))();
    piVar7 = piVar1;
  }
  return piVar7;
}

