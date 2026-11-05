
/* JUS-GAME JGalaxyDemo::JGalaxyDemo_Create [source-string] __FILE__="JGalaxyDemo.cpp"
   __FUNCTION__="JGalaxyDemo_Create" lines=[55] passed to 1 source-location call(s) */

int * JGalaxyDemo::JGalaxyDemo_Create
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)thunk_FUN_0201a228(0xc,s_JGalaxyDemo_cpp_0215c4a0,s_JGalaxyDemo_Create_0215c48c,
                                     0x37,param_4);
  FUN_020517fc(piVar1,0,0xc);
  piVar1[1] = param_1;
  iVar2 = FUN_02026f94();
  *piVar1 = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(*piVar1 + 4),FUN_021566a4);
  FUN_020282f4(*(undefined4 *)(*piVar1 + 4));
  FUN_02043264(0);
  iVar2 = jus_Scene14_CreateImpl
                    ((int)*(char *)(*(int *)(param_1 + 0x38) +
                                    (uint)*(byte *)(param_1 + 0x53) * 0x40 + 0x2e));
  piVar1[2] = iVar2;
  return piVar1;
}

