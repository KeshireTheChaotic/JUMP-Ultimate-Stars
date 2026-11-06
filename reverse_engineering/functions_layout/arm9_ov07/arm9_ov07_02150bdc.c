
int FUN_02150bdc(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 local_14;
  
                    /* JUS-TAG source_file_inferred="CommuMenuCommon.cpp" */
  local_18 = 0x100;
  local_14 = 0xc0;
  iVar1 = FUN_02151538(*param_1,param_2,0x510000,0,0x70,&local_18);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xab) = 0;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xb1) = 1;
  func_0x021b77a8(*(undefined4 *)(iVar1 + 4),0x20);
  local_20 = 0xffd0;
  local_1e = 0xfff0;
  local_1c = 0;
  local_1a = 0;
  piVar2 = (int *)thunk_FUN_0201a228(0x70,&DAT_02169674,s_Create_02169744,0x1b2);
  if (piVar2 != (int *)0x0) {
    func_0x021b054c(piVar2,0,&DAT_02093c8c);
    *piVar2 = (int)&jus_Class_021695c0::vftable;
    FUN_0214f448(piVar2 + 0x1a,&local_20);
    *piVar2 = 0x21d1c58;
  }
  if (piVar2[6] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  FUN_02020e98(iVar1,piVar2[6]);
  FUN_02023894(*(undefined4 *)(iVar1 + 4),0x510000,0);
  func_0x021b3f78(*(undefined4 *)(iVar1 + 4),0x510000);
  func_0x021b3fc4(*(undefined4 *)(iVar1 + 4),0x510001);
  func_0x021b400c(*(undefined4 *)(iVar1 + 4),0x51002c);
  return iVar1;
}

