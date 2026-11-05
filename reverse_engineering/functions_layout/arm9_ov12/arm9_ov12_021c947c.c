
/* JUS-CLASS ALTextDS_021d4a2c::vfunc_28 [class-virtual] slot 28 of vtable 021d4a2c (own slot, not
   inherited) */

void ALTextDS_021d4a2c::vfunc_28
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_10;
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  *(undefined1 *)(param_1 + 0x1a5) = 1;
  iVar2 = *(int *)(param_1 + 0x5c);
  uStack_10 = param_4;
  FUN_0200f69c(&uStack_10);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - iVar2;
  *(undefined2 *)(param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0x106) = 0;
  piVar1 = *(int **)(param_1 + 0x17c);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x40))(piVar1,0,&DAT_02093c3c);
    if (*(char *)(param_1 + 0x172) == '\0') {
      (**(code **)(*piVar1 + 0x40))(piVar1,1);
    }
    else {
      (**(code **)(*piVar1 + 0x40))(piVar1,0);
    }
    (**(code **)(**(int **)(param_1 + 0x17c) + 0x4c))(*(int **)(param_1 + 0x17c),piVar1);
  }
  *(undefined1 *)(param_1 + 0x182) = 1;
  return;
}

