//
// (c) 1998-9 Particle Systems Ltd. All Rights Reserved
//
// iJafsScript.h
//
// Compiler-generated export header for package "iJafsScript"
//
// Revision control information:
//
// $Header: /iwar2/resource/scripts/include/iJafsScript.h 10    1/05/01 19:14 Steve $
//

// Dependencies ////////////////////////////////////////////////////////////////

// Enumerated types ////////////////////////////////////////////////////////////

// Functions ///////////////////////////////////////////////////////////////////

// Check if Jafs functionality is disabled.

prototype bool iJafsScript.JafsFunctionalityAvailable();

// Call Jafs
prototype iJafsScript.CallJafs();

// Enable Jafs
prototype iJafsScript.EnableJafs( );

// Disable Jafs
prototype iJafsScript.DisableJafs( );

// Says if Jafs is Enabled
prototype bool iJafsScript.JafsEnabled();

// Says if Jafs is currently active.
prototype bool iJafsScript.JafsActive();

// Sets Jafs inactive.
prototype iJafsScript.FlagJafsActive();

// Sets Jafs inactive.
prototype iJafsScript.FlagJafsInactive();

// Get the group of tagged pods
prototype hgroup iJafsScript.GetTagGroup();

// Tag a pod
prototype iJafsScript.TagPod( hgroup tag_group, hisim pod );

// Untag a pod
prototype iJafsScript.UntagPod( hgroup tag_group, hisim pod );

// Toggle a pods tag status
prototype iJafsScript.PodTagToggle();

// Tag up to six pods in the FOV
prototype iJafsScript.TagPodsInFOV();

// Pick up pods without Jafs.
prototype iJafsScript.CheatJafs();

// Collect tagged pods.
prototype iJafsScript.CollectPods( bool collect_all );

// Enable the dockports on the pod.
prototype hdockport iJafsScript.EnablePodDockport( hisim pod );

// Disable the dockports on the pod.
prototype bool iJafsScript.DisablePodDockport( hisim pod );


// EOF /////////////////////////////////////////////////////////////////////////
