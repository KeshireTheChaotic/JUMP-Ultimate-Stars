
/* JUS-GAME CommuMenuDwldMemberEnt::CommuMenuDwldMemberEnt_Add [source-string]
   __FILE__="CommuMenuDwldMemberEnt.cpp" __FUNCTION__="CommuMenuDwldMemberEnt_Add" lines=[103]
   passed to 1 source-location call(s) */

undefined4 CommuMenuDwldMemberEnt::CommuMenuDwldMemberEnt_Add(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)
           jus_AllocDebug(0xb0,s_CommuMenuDwldMemberEnt_cpp_0216a71c,
                          s_CommuMenuDwldMemberEnt_Add_0216a700,0x67);
  FUN_020517fc(puVar1,0,0xb0);
  func_0x021b65bc();
  thunk_FUN_02070414();
  FUN_0214d66c(3);
  FUN_0214d74c();
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  *(undefined1 *)((int)puVar1 + 0xb) = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)((int)puVar1 + 0xd) = 1;
  puVar1[5] = 4;
  puVar1[6] = puVar1 + 0xf;
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 1;
    *(undefined1 *)(puVar1 + iVar3 * 6 + 0xf) = 0;
    iVar3 = iVar4;
  } while (iVar4 < 4);
  puVar1[7] = puVar1;
  puVar1[8] = FUN_02161ff8;
  puVar1[9] = FUN_0216204c;
  puVar1[10] = FUN_0216208c;
  puVar1[0xb] = FUN_02162128;
  puVar1[0xc] = FUN_02162174;
  *(undefined1 *)((int)puVar1 + 0xa1) = 1;
  (*DAT_020a0e18)();
  uVar2 = CommuMenuCmnMemberEnt::CommuMenuCmnMemberEnt_Add(puVar1 + 2);
  *puVar1 = uVar2;
  *(undefined1 *)(DAT_020a0f64 + 0x430) = 1;
  return *puVar1;
}

